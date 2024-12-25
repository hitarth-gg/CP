const owner = 'zulip';
const repo = 'zulip';

async function viewIssues() {
  const response = await fetch(`https://api.github.com/repos/${owner}/${repo}/issues`);

  if (response.ok) {
    const issues = await response.json();
    console.log(issues);
  } else {
    console.error(`Error: ${response.statusText}`);
  }
}

// Example usage:
viewIssues();
