# Friendly Prank Web Page

This folder now includes a simple prank webpage that can be shared by link without sending a ZIP file.

## Files

- `index.html` — the prank webpage that shows a fake hack alert.
- `mal.c++` — your existing C++ file with the macOS popup prank.
- `.github/workflows/github-pages.yml` — a GitHub Actions workflow to publish the site with GitHub Pages.

## Share by link (no zip needed)

### Option 1: GitHub Pages (recommended)

1. Create a new GitHub repository.
2. Push the contents of this folder to the repo.
3. Make sure the repo has a `main` branch.
4. In GitHub, go to `Settings > Pages`.
5. Set the source to `GitHub Actions`.
6. Wait for the workflow to complete.

The public URL will look like:

```text
https://<your-username>.github.io/<repo-name>/
```

Once the site is published, send that URL to your friends and they can open it directly in their browser.

### Option 2: Netlify

1. Sign in at https://app.netlify.com/.
2. Create a new site from Git.
3. Connect your GitHub account.
4. Select this repository.
5. Set `Publish directory` to `/` and deploy.

The site URL will look like:

```text
https://<site-name>.netlify.app/
```

### Option 3: Vercel

1. Sign in at https://vercel.com/.
2. Import this GitHub repository.
3. Choose `Other` for the framework preset.
4. Set `Output Directory` to `/`.
5. Deploy.

The site will be available at a URL like:

```text
https://<project-name>.vercel.app/
```

## What to send your friends

- Use the published URL.
- They open the link in their browser.
- No ZIP download is needed.

## Run locally for testing

If you want to test it before publishing:

```bash
cd ~/c++
python3 -m http.server 8080
```

Then visit:

```text
http://localhost:8080
```
